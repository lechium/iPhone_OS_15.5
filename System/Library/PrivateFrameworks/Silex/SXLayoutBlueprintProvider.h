//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Silex/SXLayoutBlueprintProvider-Protocol.h>

@class NSString, SXLayoutBlueprint;

@interface SXLayoutBlueprintProvider : NSObject <SXLayoutBlueprintProvider>
{
    SXLayoutBlueprint *blueprint;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000013a139
@property(retain, nonatomic) SXLayoutBlueprint *blueprint; // @synthesize blueprint;
- (void)updateBlueprint:(id)arg1;	// IMP=0x000000000013a09b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
