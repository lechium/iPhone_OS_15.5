//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesStoreUI/NSCopying-Protocol.h>

@class NSArray, NSString;

@interface SUNavigationMenu : NSObject <NSCopying>
{
    NSString *_cancelTitle;	// 8 = 0x8
    NSString *_closedTitle;	// 16 = 0x10
    long long _initialSelectedIndex;	// 24 = 0x18
    long long _location;	// 32 = 0x20
    NSArray *_menuItems;	// 40 = 0x28
    NSArray *_navigationButtons;	// 48 = 0x30
    NSString *_openTitle;	// 56 = 0x38
}

@property(readonly, nonatomic) NSString *openTitle; // @synthesize openTitle=_openTitle;
@property(readonly, nonatomic) NSArray *navigationButtons; // @synthesize navigationButtons=_navigationButtons;
@property(readonly, nonatomic) NSArray *menuItems; // @synthesize menuItems=_menuItems;
@property(nonatomic) long long location; // @synthesize location=_location;
@property(readonly, nonatomic) long long initialSelectedIndex; // @synthesize initialSelectedIndex=_initialSelectedIndex;
@property(readonly, nonatomic) NSString *closedTitle; // @synthesize closedTitle=_closedTitle;
@property(readonly, nonatomic) NSString *cancelTitle; // @synthesize cancelTitle=_cancelTitle;
- (id)_newNavigationButtonsFromArray:(id)arg1;	// IMP=0x00000000000e393f
- (id)_newMenuItemsFromArray:(id)arg1;	// IMP=0x00000000000e3716
- (long long)_locationForString:(id)arg1;	// IMP=0x00000000000e36f6
- (void)_loadFromDictionary:(id)arg1;	// IMP=0x00000000000e34c2
- (id)navigationButtonForLocation:(id)arg1;	// IMP=0x00000000000e335a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000e32a9
- (void)dealloc;	// IMP=0x00000000000e324a
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000e319b
- (id)init;	// IMP=0x00000000000e3187

@end

