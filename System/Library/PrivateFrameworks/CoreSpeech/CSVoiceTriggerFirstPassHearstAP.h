//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreSpeech/CSOpportuneSpeakEventMonitorDelegate-Protocol.h>

@class NSString;
@protocol CSVoiceTriggerDelegate;

@interface CSVoiceTriggerFirstPassHearstAP : NSObject <CSOpportuneSpeakEventMonitorDelegate>
{
    id <CSVoiceTriggerDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000058734
@property(nonatomic) __weak id <CSVoiceTriggerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setAsset:(id)arg1;	// IMP=0x0000000000058707
- (void)start;	// IMP=0x0000000000058701

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

