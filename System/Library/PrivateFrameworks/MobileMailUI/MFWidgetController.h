//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MobileMailUI/EFLoggable-Protocol.h>
#import <MobileMailUI/EFSignpostable-Protocol.h>

@class CHSTimelineController, NSString;

@interface MFWidgetController : NSObject <EFLoggable, EFSignpostable>
{
    CHSTimelineController *_timelineController;	// 8 = 0x8
}

+ (id)scheduler;	// IMP=0x0000000000039c0b
+ (id)sharedController;	// IMP=0x0000000000039bb6
+ (id)signpostLog;	// IMP=0x0000000000039a90
+ (id)log;	// IMP=0x00000000000399b3
- (void).cxx_destruct;	// IMP=0x000000000003a0c1
@property(retain, nonatomic) CHSTimelineController *timelineController; // @synthesize timelineController=_timelineController;
- (void)reloadTimelines;	// IMP=0x0000000000039d17
- (id)init;	// IMP=0x0000000000039c7c
@property(readonly) unsigned long long signpostID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

