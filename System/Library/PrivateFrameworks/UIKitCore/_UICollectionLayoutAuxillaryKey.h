//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UICollectionLayoutAuxillaryKey : NSObject <NSCopying>
{
    _Bool _isSupplementary;	// 8 = 0x8
    NSString *_elementKind;	// 16 = 0x10
    long long _index;	// 24 = 0x18
    long long _auxillaryKind;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000296741
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002966e4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002966a8
- (unsigned long long)hash;	// IMP=0x0000000000296683
- (id)description;	// IMP=0x000000000029656e

@end
