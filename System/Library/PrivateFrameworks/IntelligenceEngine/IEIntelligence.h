//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IEIntelligence : NSObject
{
    struct TtIntelligence *mIntelligence;	// 8 = 0x8
}

@property(nonatomic) struct TtIntelligence *mIntelligence; // @synthesize mIntelligence;
- (_Bool)isActive;	// IMP=0x000000000003940c
- (id)activeIntents;	// IMP=0x0000000000039203
- (_Bool)willHandleIntent:(id)arg1;	// IMP=0x0000000000038ff0
- (id)processIntent:(id)arg1;	// IMP=0x0000000000038b1f
- (id)startConversation;	// IMP=0x0000000000038393
- (void)load:(id)arg1;	// IMP=0x000000000003826f
- (void)dealloc;	// IMP=0x0000000000038221
- (id)init;	// IMP=0x0000000000038158

@end

