//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppAnalytics/AADataEventType-Protocol.h>

@class MISSING_TYPE;

@interface AARawDataEvent : NSObject <AADataEventType>
{
    MISSING_TYPE *name;	// 8 = 0x8
    MISSING_TYPE *dictionary;	// 24 = 0x18
}

+ (id)dataName;	// IMP=0x000000000000c260
- (void).cxx_destruct;	// IMP=0x000000000000c430
- (id)init;	// IMP=0x000000000000c3d0
- (id)toDict;	// IMP=0x000000000000c320
- (id)initWithName:(id)arg1 dictionary:(id)arg2;	// IMP=0x000000000000c1c0

@end
