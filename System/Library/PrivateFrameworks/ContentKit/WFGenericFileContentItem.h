//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContentKit/WFContentItemClass-Protocol.h>

@interface WFGenericFileContentItem <WFContentItemClass>
{
}

+ (id)contentCategories;	// IMP=0x00000000000cb642
+ (id)outputTypes;	// IMP=0x00000000000cb4fa
+ (id)ownedTypes;	// IMP=0x00000000000cb423
+ (id)itemWithSerializedItem:(id)arg1 forType:(id)arg2 named:(id)arg3 attributionSet:(id)arg4 cachingIdentifier:(id)arg5;	// IMP=0x00000000000caa71
+ (id)stringConversionBehavior;	// IMP=0x00000000000ca9be
+ (id)propertyBuilders;	// IMP=0x00000000000ca541
- (_Bool)isContent;	// IMP=0x00000000000c9e38
- (_Bool)canGenerateRepresentationForType:(id)arg1;	// IMP=0x00000000000c9d03
- (void)generateFileRepresentation:(CDUnknownBlockType)arg1 options:(id)arg2 forType:(id)arg3;	// IMP=0x00000000000c9b28
- (void)generateObjectRepresentation:(CDUnknownBlockType)arg1 options:(id)arg2 forClass:(Class)arg3;	// IMP=0x00000000000c99de

@end

