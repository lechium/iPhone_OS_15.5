//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOAnnotatedItemList-Protocol.h>

@class GEOMapItemAttribution, NSString;
@protocol GEOPictureItemContainer, GEOTextItemContainer;

@interface GEOAnnotatedItemList : NSObject <GEOAnnotatedItemList>
{
    id <GEOPictureItemContainer> _pictureItemContainer;	// 8 = 0x8
    id <GEOTextItemContainer> _textItemContainer;	// 16 = 0x10
    NSString *_title;	// 24 = 0x18
    int _annotatedItemStyle;	// 32 = 0x20
    GEOMapItemAttribution *_attribution;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000040f0a4
@property(readonly, nonatomic) GEOMapItemAttribution *attribution; // @synthesize attribution=_attribution;
@property(readonly, nonatomic) int annotatedItemStyle; // @synthesize annotatedItemStyle=_annotatedItemStyle;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) id <GEOTextItemContainer> textItemContainer; // @synthesize textItemContainer=_textItemContainer;
@property(readonly, nonatomic) id <GEOPictureItemContainer> pictureItemContainer; // @synthesize pictureItemContainer=_pictureItemContainer;
- (id)initWithAnnotatedItemList:(id)arg1 attribution:(id)arg2;	// IMP=0x000000000040ee89
- (id)initWithPictureItemContainer:(id)arg1 textItemContainer:(id)arg2 title:(id)arg3 annotatedItemStyle:(int)arg4 attribution:(id)arg5;	// IMP=0x000000000040ed95
- (id)init;	// IMP=0x000000000040ed6b

@end

