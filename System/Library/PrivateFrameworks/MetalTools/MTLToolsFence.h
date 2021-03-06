//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MetalTools/MTLFence-Protocol.h>

@class NSString;
@protocol MTLDevice;

@interface MTLToolsFence <MTLFence>
{
}

@property(copy) NSString *label;
@property(readonly) id <MTLDevice> device;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

