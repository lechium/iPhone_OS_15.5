//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/BSDescriptionProviding-Protocol.h>
#import <SpringBoardHome/NSCopying-Protocol.h>

@class NSString;

@interface SBHFolderIconVisualConfiguration : NSObject <NSCopying, BSDescriptionProviding>
{
    struct CGSize _gridCellSize;	// 8 = 0x8
    struct CGSize _gridCellSpacing;	// 24 = 0x18
}

@property(nonatomic) struct CGSize gridCellSpacing; // @synthesize gridCellSpacing=_gridCellSpacing;
@property(nonatomic) struct CGSize gridCellSize; // @synthesize gridCellSize=_gridCellSize;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000000008ca42
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x000000000008c9f2
- (id)succinctDescriptionBuilder;	// IMP=0x000000000008c9d6
- (id)succinctDescription;	// IMP=0x000000000008c986
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000008c86f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000008c83d
- (id)init;	// IMP=0x000000000008c7f3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

