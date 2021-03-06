//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/BSDescriptionProviding-Protocol.h>
#import <SpringBoardHome/NSCoding-Protocol.h>
#import <SpringBoardHome/NSCopying-Protocol.h>

@class NSArray, NSString;

@interface SBHIconRelativePath : NSObject <BSDescriptionProviding, NSCopying, NSCoding>
{
    NSString *_folderIdentifier;	// 8 = 0x8
    NSString *_listIdentifier;	// 16 = 0x10
    NSArray *_priorIconIdentifiers;	// 24 = 0x18
    NSArray *_subsequentIconIdentifiers;	// 32 = 0x20
    unsigned long long _gridCellInfoOptions;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000024fb2b
- (void).cxx_destruct;	// IMP=0x0000000000250189
@property(readonly, nonatomic) unsigned long long gridCellInfoOptions; // @synthesize gridCellInfoOptions=_gridCellInfoOptions;
@property(readonly, copy, nonatomic) NSArray *subsequentIconIdentifiers; // @synthesize subsequentIconIdentifiers=_subsequentIconIdentifiers;
@property(readonly, copy, nonatomic) NSArray *priorIconIdentifiers; // @synthesize priorIconIdentifiers=_priorIconIdentifiers;
@property(readonly, copy, nonatomic) NSString *listIdentifier; // @synthesize listIdentifier=_listIdentifier;
@property(readonly, copy, nonatomic) NSString *folderIdentifier; // @synthesize folderIdentifier=_folderIdentifier;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000000024ffa9
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x000000000024ff59
- (id)succinctDescriptionBuilder;	// IMP=0x000000000024ff3d
- (id)succinctDescription;	// IMP=0x000000000024feed
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000024fdfe
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000024fbe0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000024fb33
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000024fb20
- (id)iconRelativePathWithFolderIdentifier:(id)arg1 listIdentifier:(id)arg2;	// IMP=0x000000000024fa92
- (id)initWithFolderIdentifier:(id)arg1 listIdentifier:(id)arg2 priorIconIdentifiers:(id)arg3 subsequentIconIdentifiers:(id)arg4 gridCellInfoOptions:(unsigned long long)arg5;	// IMP=0x000000000024f97d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

