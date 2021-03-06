//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/NSCopying-Protocol.h>

@class NSArray, NSString, SBDodgingItemPreference, SBDodgingResolverViewController, UIView;
@protocol SBDodgingItemDelegate, UICoordinateSpace;

@interface SBDodgingItem : NSObject <NSCopying>
{
    SBDodgingResolverViewController *_dodgingResolverViewController;	// 8 = 0x8
    NSString *_uniqueIdentifier;	// 16 = 0x10
    id <UICoordinateSpace> _containerCoordinateSpace;	// 24 = 0x18
    NSArray *_otherDodgingIdentifiers;	// 32 = 0x20
    id <SBDodgingItemDelegate> _delegate;	// 40 = 0x28
    UIView *_view;	// 48 = 0x30
    SBDodgingItemPreference *_preference;	// 56 = 0x38
    struct CGPoint _center;	// 64 = 0x40
    struct CGSize _size;	// 80 = 0x50
    struct CGSize _containerSize;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000577aa5
@property(retain, nonatomic) SBDodgingItemPreference *preference; // @synthesize preference=_preference;
@property(readonly, nonatomic) UIView *view; // @synthesize view=_view;
@property(readonly, nonatomic) __weak id <SBDodgingItemDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *otherDodgingIdentifiers; // @synthesize otherDodgingIdentifiers=_otherDodgingIdentifiers;
@property(retain, nonatomic) id <UICoordinateSpace> containerCoordinateSpace; // @synthesize containerCoordinateSpace=_containerCoordinateSpace;
@property(nonatomic) struct CGSize containerSize; // @synthesize containerSize=_containerSize;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) struct CGPoint center; // @synthesize center=_center;
@property(readonly, copy, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (id)description;	// IMP=0x0000000000577952
- (unsigned long long)hash;	// IMP=0x000000000057793c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005778b1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000577841
- (id)invalidate;	// IMP=0x0000000000577828
- (void)setNeedsUpdateAnimated:(_Bool)arg1;	// IMP=0x000000000057780d
- (id)initWithUniqueIdentifier:(id)arg1 view:(id)arg2 delegate:(id)arg3 dodgingResolverViewController:(id)arg4;	// IMP=0x0000000000577585

@end

