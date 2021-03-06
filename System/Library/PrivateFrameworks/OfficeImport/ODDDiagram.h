//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, ODDColorTransform, ODDNodePoint, ODDStyleDefinition;

__attribute__((visibility("hidden")))
@interface ODDDiagram
{
    ODDNodePoint *mDocumentPoint;	// 40 = 0x28
    ODDColorTransform *mColorTransform;	// 48 = 0x30
    ODDStyleDefinition *mStyleDefinition;	// 56 = 0x38
    NSArray *mEquivalentDrawables;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000335a17
@property(retain, nonatomic) NSArray *equivalentDrawables; // @synthesize equivalentDrawables=mEquivalentDrawables;
- (id)description;	// IMP=0x00000000003359b4
- (id)styleDefinition;	// IMP=0x00000000001e65d5
- (id)colorTransform;	// IMP=0x00000000001e6612
- (void)setDocumentPoint:(id)arg1;	// IMP=0x00000000001e7baa
- (id)documentPoint;	// IMP=0x00000000001e91f8
- (void)setParentTextListStyle:(id)arg1;	// IMP=0x00000000001e8bf7
- (id)init;	// IMP=0x00000000001e637f

@end

