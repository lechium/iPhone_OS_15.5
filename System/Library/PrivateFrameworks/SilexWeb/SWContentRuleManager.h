//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SilexWeb/SWContentRuleManager-Protocol.h>

@class NSString, WKUserContentController;
@protocol OS_dispatch_group;

@interface SWContentRuleManager : NSObject <SWContentRuleManager>
{
    WKUserContentController *_userContentController;	// 8 = 0x8
    NSObject<OS_dispatch_group> *_dispatchGroup;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000068b8
@property(readonly, nonatomic) NSObject<OS_dispatch_group> *dispatchGroup; // @synthesize dispatchGroup=_dispatchGroup;
@property(readonly, nonatomic) WKUserContentController *userContentController; // @synthesize userContentController=_userContentController;
- (id)configureContentRules;	// IMP=0x000000000000676c
- (void)removeContentListForIdentifier:(id)arg1;	// IMP=0x00000000000065f5
- (void)addContentRuleList:(id)arg1 identifier:(id)arg2;	// IMP=0x000000000000644e
- (id)initWithUserContentController:(id)arg1;	// IMP=0x00000000000063d0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
