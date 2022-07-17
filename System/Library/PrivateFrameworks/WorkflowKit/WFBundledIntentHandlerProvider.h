//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WorkflowKit/INCLocalExtending-Protocol.h>
#import <WorkflowKit/INIntentHandlerProviding-Protocol.h>

@class NSString;

@interface WFBundledIntentHandlerProvider : NSObject <INCLocalExtending, INIntentHandlerProviding>
{
}

+ (id)localIntentHandlerLaunchID;	// IMP=0x00000000000e7429
+ (id)sharedInstance;	// IMP=0x00000000000e73c6
- (id)handlerForIntent:(id)arg1;	// IMP=0x00000000000e7154
@property(readonly, nonatomic) NSString *localExtensionIdentifier;
- (id)init;	// IMP=0x00000000000e70b3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
