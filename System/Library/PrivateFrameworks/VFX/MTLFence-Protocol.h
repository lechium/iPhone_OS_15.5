//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VFX/NSObject-Protocol.h>

@class NSString;
@protocol MTLDevice;

@protocol MTLFence <NSObject>
@property(nonatomic, copy) NSString *label;
@property(nonatomic, readonly) id <MTLDevice> device;
@end

