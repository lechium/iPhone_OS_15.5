//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class Core_Audio_XPC_Raw_Transporter;

@protocol Core_Audio_IO
- (void)start_after_io_device_change:(unsigned int)arg1 reply:(void (^)(_Bool))arg2;
- (void)stop_before_io_device_change:(unsigned int)arg1 reply:(void (^)(_Bool))arg2;
- (void)handle_io_message:(struct Device_Token)arg1 with:(Core_Audio_XPC_Raw_Transporter *)arg2 reply:(void (^)(Core_Audio_XPC_Raw_Transporter *))arg3;
@end

