//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MapsDebugTableSection, NSMutableArray, NSString, UICollectionViewCell, UIListContentConfiguration, UITableViewCell;

__attribute__((visibility("hidden")))
@interface MapsDebugTableRow : NSObject
{
    NSMutableArray *_controlsToClearTargetsFromOnReuse;	// 8 = 0x8
    _Bool _deprecated;	// 16 = 0x10
    _Bool _visible;	// 17 = 0x11
    MapsDebugTableSection *_section;	// 24 = 0x18
    NSString *_title;	// 32 = 0x20
    NSString *_subtitle;	// 40 = 0x28
    CDUnknownBlockType _prepareContentBlock;	// 48 = 0x30
    CDUnknownBlockType _selectionAction;	// 56 = 0x38
    UITableViewCell *_currentCell;	// 64 = 0x40
    CDUnknownBlockType _configureBlock;	// 72 = 0x48
    UICollectionViewCell *_currentCollectionViewCell;	// 80 = 0x50
}

+ (void)registerCellsInCollectionView:(id)arg1;	// IMP=0x0020000000aea038
+ (id)reuseIdentifier;	// IMP=0x0010000000ae964e
- (void).cxx_destruct;	// IMP=0x0020000000aea7d2
@property(retain, nonatomic) UICollectionViewCell *currentCollectionViewCell; // @synthesize currentCollectionViewCell=_currentCollectionViewCell;
@property(copy, nonatomic) CDUnknownBlockType configureBlock; // @synthesize configureBlock=_configureBlock;
@property(retain, nonatomic) UITableViewCell *currentCell; // @synthesize currentCell=_currentCell;
@property(copy, nonatomic) CDUnknownBlockType selectionAction; // @synthesize selectionAction=_selectionAction;
@property(copy, nonatomic) CDUnknownBlockType prepareContentBlock; // @synthesize prepareContentBlock=_prepareContentBlock;
@property(nonatomic) _Bool visible; // @synthesize visible=_visible;
@property(nonatomic) _Bool deprecated; // @synthesize deprecated=_deprecated;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak MapsDebugTableSection *section; // @synthesize section=_section;
- (void);	// IMP=0x0010000000aea431
- (id)cellForCollectionView:(id)arg1 forIndexPath:(id)arg2;	// IMP=0x0010000000aea2a5
@property(readonly, nonatomic) UIListContentConfiguration *cellContentConfiguration;
@property(readonly, nonatomic) long long cellStyle;
- (void)configureCell:(id)arg1;	// IMP=0x0010000000ae9a09
- (id)cellForTableView:(id)arg1;	// IMP=0x0010000000ae984f
- (void)_clearAllControlTargetsForReuse;	// IMP=0x0010000000ae9708
- (void)addControlThatNeedsClearingTargetOnReuse:(id)arg1;	// IMP=0x0010000000ae96ae
- (void)invalidate;	// IMP=0x0010000000ae960d
- (void)dealloc;	// IMP=0x0010000000ae95cf
- (id)init;	// IMP=0x0010000000ae9597

@end

