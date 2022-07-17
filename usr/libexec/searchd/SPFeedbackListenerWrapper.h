//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol SFFeedbackListener;

@interface SPFeedbackListenerWrapper : NSObject
{
    id <SFFeedbackListener> _feedbackListener;	// 8 = 0x8
    unsigned long long _supportedTypes;	// 16 = 0x10
}

+ (id)wrapperWithFeedbackListener:(id)arg1;	// IMP=0x004000000001be8a
+ (void)initialize;	// IMP=0x001000000001be4d
- (void).cxx_destruct;	// IMP=0x002000000001bfac
@property(nonatomic) unsigned long long supportedTypes; // @synthesize supportedTypes=_supportedTypes;
@property(retain, nonatomic) id <SFFeedbackListener> feedbackListener; // @synthesize feedbackListener=_feedbackListener;
- (id)initWithFeedbackListener:(id)arg1;	// IMP=0x001000000001bed7
- (_Bool)supportsFeedbackType:(long long)arg1;	// IMP=0x001000000001be71

@end
