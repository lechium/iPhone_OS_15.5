//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSString;

@interface AKDeviceListDeltaMessagePayload : NSObject
{
    NSString *_altDSID;	// 8 = 0x8
    unsigned long long _operation;	// 16 = 0x10
    NSString *_machineID;	// 24 = 0x18
    NSArray *_machineIDs;	// 32 = 0x20
    NSString *_serialNumber;	// 40 = 0x28
    NSDate *_timestamp;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000018e9a
@property(readonly, copy) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, copy) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(readonly, copy) NSArray *machineIDs; // @synthesize machineIDs=_machineIDs;
@property(readonly, copy) NSString *machineID; // @synthesize machineID=_machineID;
@property(readonly) unsigned long long operation; // @synthesize operation=_operation;
@property(readonly, copy) NSString *altDSID; // @synthesize altDSID=_altDSID;
- (unsigned long long)_convertOperationToEnum:(id)arg1;	// IMP=0x0000000000018d84
- (id)initWithResponseBody:(id)arg1;	// IMP=0x0000000000018a9d

@end
