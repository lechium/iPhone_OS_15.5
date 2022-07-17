//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SensorKit/SRSensorKitServiceClientReading-Protocol.h>

@class SRSensorReader;

__attribute__((visibility("hidden")))
@interface SRSensorReaderClient : NSObject <SRSensorKitServiceClientReading>
{
    SRSensorReader *_reader;	// 8 = 0x8
}

+ (id)readerClientWithReader:(id)arg1;	// IMP=0x000000000001fd32
- (void).cxx_destruct;	// IMP=0x000000000001fe07
@property __weak SRSensorReader *reader; // @synthesize reader=_reader;
- (void)resetDatastoreFiles:(id)arg1;	// IMP=0x000000000001fdb7
- (id)initWithReader:(id)arg1;	// IMP=0x000000000001fd61

@end
