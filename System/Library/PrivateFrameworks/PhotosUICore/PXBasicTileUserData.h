//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PXViewSpec;

@interface PXBasicTileUserData : NSObject
{
    PXViewSpec *_viewSpec;	// 8 = 0x8
}

+ (id)userDataWithViewSpec:(id)arg1;	// IMP=0x000000000017d882
- (void).cxx_destruct;	// IMP=0x000000000017d872
@property(readonly, nonatomic) PXViewSpec *viewSpec; // @synthesize viewSpec=_viewSpec;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000017d790
- (unsigned long long)hash;	// IMP=0x000000000017d74c
- (id)_initWithViewSpec:(id)arg1;	// IMP=0x000000000017d6e1
- (id)init;	// IMP=0x000000000017d6cd

@end

