//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFAccessResource.h>

@interface WFEvernoteAccessResource : WFAccessResource
{
}

+ (id)userInterfaceClasses;	// IMP=0x0000000000244a36
+ (id)userInterfaceProtocol;	// IMP=0x0000000000244a25
+ (id)evernoteCallbackScheme;	// IMP=0x00000000002449fc
+ (id)evernoteSession;	// IMP=0x0000000000244999
- (void)logOut;	// IMP=0x00000000002448f9
- (_Bool)canLogOut;	// IMP=0x00000000002448f1
- (id)username;	// IMP=0x0000000000244899
- (id)resourceName;	// IMP=0x000000000024488c
- (void)makeAvailableWithRemoteInterface:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002447f7
- (unsigned long long)status;	// IMP=0x00000000002447a4
- (id)protectedResourceDescription;	// IMP=0x0000000000244797
- (void)dealloc;	// IMP=0x0000000000244718
- (id)initWithDefinition:(id)arg1;	// IMP=0x0000000000244675
- (id)associatedAppIdentifier;	// IMP=0x0000000000244668

@end

