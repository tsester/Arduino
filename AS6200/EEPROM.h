class EEPROM
{
	public:
		/* con(de)structors
		 * * * * * * * * * * */
		EEPROM(byte EEPROM_address): \
			current_address(0), \
			device_address(EEPROM_address)
		{}
//			last_address(0){}
		/* * * * * * * * * *
		 *                 *
		 *    functions    *
		 *                 *
		 * * * * * * * * * */
		ushort get_current_address(void);
//		ushort get_last_address(void);
		void set_current_address(ushort addr);
		byte read_byte(void);
		byte read_byte(ushort addr/*, + optional bool stop connection */);
		byte read_byte_manual(void);
		void read_byte_manual_request(ushort many);
//		void read_page(byte page[],ushort many);
//		void read_page(byte page[],ushort many,ushort addr/*, + optional bool stop connection */);
//		void update_current_address(ushort addr);
//		void write_byte(byte b);
		void write_byte(byte b,ushort addr);
		void write_byte_manual(byte b);
		void write_byte_manual_end(void);
		void write_byte_manual_start(void);
//		void write_page(ushort addr,byte data[], ushort len);
	private:
		ushort current_address;
		byte const device_address;
	//	ushort last_address;
		/*
		 * functions
		 * * * * * * */
		void limit_current_address(void);
//		void limit_last_address(void);
};
