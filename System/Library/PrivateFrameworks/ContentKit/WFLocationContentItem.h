//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContentKit/WFContentItemClass-Protocol.h>

@interface WFLocationContentItem <WFContentItemClass>
{
}

+ (id)countDescription;	// IMP=0x0000000000101ab2
+ (id)pluralTypeDescription;	// IMP=0x0000000000101a9a
+ (id)typeDescription;	// IMP=0x0000000000101a7b
+ (id)contentCategories;	// IMP=0x0000000000101a14
+ (id)outputTypes;	// IMP=0x000000000010189a
+ (id)ownedTypes;	// IMP=0x000000000010179e
+ (id)stringConversionBehavior;	// IMP=0x0000000000101746
+ (id)propertyBuilders;	// IMP=0x0000000000101067
- (_Bool)includesFileRepresentationInSerializedItem;	// IMP=0x0000000000103134
- (id)preferredFileType;	// IMP=0x0000000000103111
- (void)generateFileRepresentation:(CDUnknownBlockType)arg1 options:(id)arg2 forType:(id)arg3;	// IMP=0x0000000000102e75
- (void)generateObjectRepresentations:(CDUnknownBlockType)arg1 options:(id)arg2 forClass:(Class)arg3;	// IMP=0x000000000010282b
- (void)getMKMapSnapshotImageForSize:(struct CGSize)arg1 scale:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000010276f
- (void)getMKMapSnapshotImageForSize:(struct CGSize)arg1 scale:(double)arg2 named:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000102697
- (_Bool)getListThumbnail:(CDUnknownBlockType)arg1 forSize:(struct CGSize)arg2;	// IMP=0x00000000000aea47
- (_Bool)getListAltText:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ae996
- (_Bool)getListSubtitle:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ae8f7

@end

