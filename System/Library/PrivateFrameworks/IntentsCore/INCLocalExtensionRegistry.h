//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface INCLocalExtensionRegistry : NSObject
{
    NSMutableDictionary *_localExtensionsByIdentifier;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x0000000000002f40
- (void).cxx_destruct;	// IMP=0x0000000000002f14
- (id)localExtensionForIdentifier:(id)arg1;	// IMP=0x0000000000002efe
- (id)localExtensions;	// IMP=0x0000000000002e97
- (void)deregisterLocalExtension:(id)arg1;	// IMP=0x0000000000002cff
- (void)registerLocalExtension:(id)arg1;	// IMP=0x0000000000002c72
- (id)init;	// IMP=0x0000000000002c1c

@end

