//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class INIntent;
@protocol APUIWFLIntentControllerDelegate;

@interface APUIWFLIntentController : NSObject
{
    INIntent *_intent;	// 8 = 0x8
    long long _executionContext;	// 16 = 0x10
    id <APUIWFLIntentControllerDelegate> _delegate;	// 24 = 0x18
    CDUnknownBlockType _intentProceedHandler;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000033da
@property(copy, nonatomic) CDUnknownBlockType intentProceedHandler; // @synthesize intentProceedHandler=_intentProceedHandler;
@property(nonatomic) __weak id <APUIWFLIntentControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long executionContext; // @synthesize executionContext=_executionContext;
@property(retain, nonatomic) INIntent *intent; // @synthesize intent=_intent;
- (void)launchAppWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000003343
- (void)confirmationGranted:(_Bool)arg1;	// IMP=0x000000000000332a
- (void)stop;	// IMP=0x0000000000003311
- (void)begin;	// IMP=0x00000000000032f8
- (void)_logFaultFromFunction:(const char *)arg1;	// IMP=0x00000000000032b2
- (id)initWithIntent:(id)arg1;	// IMP=0x000000000000322e

@end
