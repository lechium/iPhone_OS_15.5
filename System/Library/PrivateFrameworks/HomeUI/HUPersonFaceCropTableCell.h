//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

#import <HomeUI/HUCellProtocol-Protocol.h>

@class HFItem, HMFaceCrop, NSArray, NSString, UIImage, UIImageView;
@protocol HUResizableCellDelegate;

@interface HUPersonFaceCropTableCell : UITableViewCell <HUCellProtocol>
{
    HFItem *_item;	// 8 = 0x8
    HMFaceCrop *_personFaceCrop;	// 16 = 0x10
    UIImage *_faceImage;	// 24 = 0x18
    UIImageView *_faceCropView;	// 32 = 0x20
    NSArray *_constraints;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000003b97a6
@property(retain, nonatomic) NSArray *constraints; // @synthesize constraints=_constraints;
@property(retain, nonatomic) UIImageView *faceCropView; // @synthesize faceCropView=_faceCropView;
@property(retain, nonatomic) UIImage *faceImage; // @synthesize faceImage=_faceImage;
@property(retain, nonatomic) HMFaceCrop *personFaceCrop; // @synthesize personFaceCrop=_personFaceCrop;
@property(retain, nonatomic) HFItem *item; // @synthesize item=_item;
- (void)_setupConstraints;	// IMP=0x00000000003b9119
- (void)updateUIWithAnimation:(_Bool)arg1;	// IMP=0x00000000003b8ff7
- (void)layoutSubviews;	// IMP=0x00000000003b8f0d
- (void)prepareForReuse;	// IMP=0x00000000003b8e8e
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000000003b8c92

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <HUResizableCellDelegate> resizingDelegate;
@property(readonly) Class superclass;

@end

