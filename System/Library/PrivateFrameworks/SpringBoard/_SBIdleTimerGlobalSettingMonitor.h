//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol _SBIdleTimerGlobalSettingMonitorDelegate;

@interface _SBIdleTimerGlobalSettingMonitor : NSObject
{
    NSString *_label;	// 8 = 0x8
    id <_SBIdleTimerGlobalSettingMonitorDelegate> _delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000638246
@property(nonatomic) __weak id <_SBIdleTimerGlobalSettingMonitorDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSString *label; // @synthesize label=_label;
- (_Bool)_updateCache;	// IMP=0x000000000070a0c2
- (id)formattedValue;	// IMP=0x0000000000638208
- (id)initWithLabel:(id)arg1 delegate:(id)arg2;	// IMP=0x0000000000638075

@end

