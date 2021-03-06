//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVFCore/AVLoggingIdentifier-Protocol.h>

@class AVAssetLoggingIdentifierInternal, NSString;

__attribute__((visibility("hidden")))
@interface AVAssetLoggingIdentifier : NSObject <AVLoggingIdentifier>
{
    AVAssetLoggingIdentifierInternal *_priv;	// 8 = 0x8
}

- (id)makeDerivedIdentifier;	// IMP=0x0000000000078a49
@property(readonly, copy) NSString *description;
@property(readonly) NSString *name;
- (void)dealloc;	// IMP=0x00000000000789b7
- (id)init;	// IMP=0x000000000007880a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

