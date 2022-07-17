//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CarPlay/NSSecureCoding-Protocol.h>

@class CPButton, CPListTemplate, NSArray, NSString, NSUUID, UIImage;

@interface CPListSection : NSObject <NSSecureCoding>
{
    NSString *_header;	// 8 = 0x8
    NSString *_headerSubtitle;	// 16 = 0x10
    UIImage *_headerImage;	// 24 = 0x18
    CPButton *_headerButton;	// 32 = 0x20
    NSString *_sectionIndexTitle;	// 40 = 0x28
    NSArray *_items;	// 48 = 0x30
    CPListTemplate *_listTemplate;	// 56 = 0x38
    NSUUID *_identifier;	// 64 = 0x40
    long long _index;	// 72 = 0x48
    unsigned long long _sectionHeaderStyle;	// 80 = 0x50
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000f6c0
- (void).cxx_destruct;	// IMP=0x000000000001066f
@property(nonatomic) unsigned long long sectionHeaderStyle; // @synthesize sectionHeaderStyle=_sectionHeaderStyle;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak CPListTemplate *listTemplate; // @synthesize listTemplate=_listTemplate;
@property(readonly, copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(readonly, copy, nonatomic) NSString *sectionIndexTitle; // @synthesize sectionIndexTitle=_sectionIndexTitle;
@property(readonly, copy, nonatomic) CPButton *headerButton; // @synthesize headerButton=_headerButton;
@property(copy, nonatomic) UIImage *headerImage; // @synthesize headerImage=_headerImage;
@property(readonly, copy, nonatomic) NSString *headerSubtitle; // @synthesize headerSubtitle=_headerSubtitle;
@property(readonly, copy, nonatomic) NSString *header; // @synthesize header=_header;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000010220
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000ff6f
- (void)replaceItems:(id)arg1;	// IMP=0x000000000000ff42
- (void)replaceItemAtIndex:(unsigned long long)arg1 withItem:(id)arg2;	// IMP=0x000000000000fdff
- (unsigned long long)indexOfItem:(id)arg1;	// IMP=0x000000000000fc78
- (id)itemAtIndex:(unsigned long long)arg1;	// IMP=0x000000000000fc19
- (long long)numberOfItems;	// IMP=0x000000000000fbd5
- (id)initWithItems:(id)arg1;	// IMP=0x000000000000fbbe
- (void)_commonInitWithItems:(id)arg1 header:(id)arg2 headerSubtitle:(id)arg3 headerImage:(id)arg4 headerButton:(id)arg5 sectionIndexTitle:(id)arg6;	// IMP=0x000000000000f88b
- (id)initWithItems:(id)arg1 header:(id)arg2 headerSubtitle:(id)arg3 headerImage:(id)arg4 headerButton:(id)arg5 sectionIndexTitle:(id)arg6;	// IMP=0x000000000000f799
- (id)initWithItems:(id)arg1 header:(id)arg2 sectionIndexTitle:(id)arg3;	// IMP=0x000000000000f6c8

@end
