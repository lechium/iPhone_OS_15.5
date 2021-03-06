//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Silex/SXLayoutInstructionFactory-Protocol.h>

@class NSString;
@protocol SXPresentationAttributesProvider;

@interface SXLayoutInstructionFactory : NSObject <SXLayoutInstructionFactory>
{
    id <SXPresentationAttributesProvider> _presentationAttributesProvider;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000121f09
@property(readonly, nonatomic) id <SXPresentationAttributesProvider> presentationAttributesProvider; // @synthesize presentationAttributesProvider=_presentationAttributesProvider;
- (id)createInstructions;	// IMP=0x0000000000121e10
- (id)initWithPresentationAttributesProvider:(id)arg1;	// IMP=0x0000000000121da5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

