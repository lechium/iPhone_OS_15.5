//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CBCharacteristic, CBPeripheral, NSArray, NSDate, NSError;

@protocol HDHSCharacteristicsDelegate
- (void)peripheral:(CBPeripheral *)arg1 didWriteValueForCharacteristic:(CBCharacteristic *)arg2 error:(NSError *)arg3;
- (void)peripheral:(CBPeripheral *)arg1 didUpdateValueForCharacteristic:(CBCharacteristic *)arg2 updateTime:(NSDate *)arg3 error:(NSError *)arg4;
- (void)peripheral:(CBPeripheral *)arg1 didDiscoverCharacteristic:(CBCharacteristic *)arg2;
- (void)peripheral:(CBPeripheral *)arg1 didDiscoverCharacteristics:(NSArray *)arg2;
@end
