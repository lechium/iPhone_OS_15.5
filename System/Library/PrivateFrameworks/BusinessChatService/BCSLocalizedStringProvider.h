//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BusinessChatService/BCSLocalizedStringProviding-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BCSLocalizedStringProvider : NSObject <BCSLocalizedStringProviding>
{
}

+ (id)sharedInstance;	// IMP=0x000000000002c26c
- (id)willOpenAtDifferentDayPluralWithFormattedTime:(id)arg1 formattedDay:(id)arg2;	// IMP=0x000000000002c54e
- (id)willOpenAtDifferentDaySingularWithFormattedTime:(id)arg1 formattedDay:(id)arg2;	// IMP=0x000000000002c45b
- (id)willOpenAtSameDayPluralWithFormattedTime:(id)arg1;	// IMP=0x000000000002c38e
- (id)willOpenAtSameDaySingularWithFormattedTime:(id)arg1;	// IMP=0x000000000002c2c1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

