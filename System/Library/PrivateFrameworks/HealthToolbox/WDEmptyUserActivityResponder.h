//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthToolbox/WDUserActivityResponder-Protocol.h>

@class NSString;

@interface WDEmptyUserActivityResponder : NSObject <WDUserActivityResponder>
{
}

+ (id)emptyUserActivityResponder;	// IMP=0x000000000000fc5b
- (id)applyTransitionActivity:(id)arg1;	// IMP=0x000000000000fcb6
- (void)applyChangeActivity:(id)arg1;	// IMP=0x000000000000fcb0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
