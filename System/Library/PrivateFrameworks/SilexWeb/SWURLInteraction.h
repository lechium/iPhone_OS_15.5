//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SilexWeb/SWInteraction-Protocol.h>

@class NSString, NSURL;
@protocol SWNavigationManager;

@interface SWURLInteraction : NSObject <SWInteraction>
{
    NSURL *_URL;	// 8 = 0x8
    id <SWNavigationManager> _navigationManager;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000004c8d
@property(readonly, nonatomic) id <SWNavigationManager> navigationManager; // @synthesize navigationManager=_navigationManager;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000004acb
- (void)perform;	// IMP=0x0000000000004a2b
@property(readonly, nonatomic) unsigned long long type;
- (id)initWithURL:(id)arg1 navigationManager:(id)arg2;	// IMP=0x0000000000004959

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

