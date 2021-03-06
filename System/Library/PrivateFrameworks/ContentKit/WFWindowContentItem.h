//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContentKit/WFContentItemClass-Protocol.h>

@class WFWindow;

@interface WFWindowContentItem <WFContentItemClass>
{
}

+ (id)countDescription;	// IMP=0x000000000005984a
+ (id)pluralTypeDescription;	// IMP=0x0000000000059839
+ (id)typeDescription;	// IMP=0x0000000000059828
+ (id)contentCategories;	// IMP=0x00000000000597c1
+ (id)outputTypes;	// IMP=0x00000000000596fe
+ (id)ownedTypes;	// IMP=0x0000000000059682
+ (_Bool)hasLibrary;	// IMP=0x000000000005967a
+ (void)runQuery:(id)arg1 withItems:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000059580
+ (id)propertyBuilders;	// IMP=0x000000000005919c
- (id)defaultSourceForRepresentation:(id)arg1;	// IMP=0x0000000000059130
- (id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000058f18
@property(readonly, nonatomic) WFWindow *window;
- (_Bool)getListAltText:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ad939
- (_Bool)getListThumbnail:(CDUnknownBlockType)arg1 forSize:(struct CGSize)arg2;	// IMP=0x00000000000ad803
- (_Bool)getListSubtitle:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ad776

@end

