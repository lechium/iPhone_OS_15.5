//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXForYouRankable-Protocol.h>

@class NSArray, NSDate;
@protocol PXCMMCloudGadgetViewControllerDelegate;

@interface PXCloudWelcomeGadgetProvider <PXForYouRankable>
{
    unsigned long long _sourceType;	// 8 = 0x8
    id <PXCMMCloudGadgetViewControllerDelegate> _gadgetDelegate;	// 16 = 0x10
    NSArray *_contentGadgets;	// 24 = 0x18
}

+ (id)new;	// IMP=0x000000000035a75c
- (void).cxx_destruct;	// IMP=0x000000000035a6ba
@property(copy, nonatomic) NSArray *contentGadgets; // @synthesize contentGadgets=_contentGadgets;
@property(nonatomic) __weak id <PXCMMCloudGadgetViewControllerDelegate> gadgetDelegate; // @synthesize gadgetDelegate=_gadgetDelegate;
@property(readonly, nonatomic) unsigned long long sourceType; // @synthesize sourceType=_sourceType;
- (void)didUpdateCloudPhotoLibraryEnablement:(id)arg1;	// IMP=0x000000000035a5e8
- (void)presentationRequestForWelcomeCloudViewController:(id)arg1;	// IMP=0x000000000035a576
- (void)resetPriorityDate;	// IMP=0x000000000035a570
@property(readonly, nonatomic) unsigned long long gadgetType;
@property(readonly, nonatomic) long long defaultPriority;
@property(readonly, nonatomic) long long priorityType;
@property(readonly, nonatomic) NSDate *priorityDate;
- (void)generateGadgets;	// IMP=0x000000000035a3b2
- (unsigned long long)estimatedNumberOfGadgets;	// IMP=0x000000000035a3a7
- (id)initWithSourceType:(unsigned long long)arg1;	// IMP=0x000000000035a363
- (id)initWithIdentifier:(id)arg1;	// IMP=0x000000000035a2e0
- (id)init;	// IMP=0x000000000035a266

@end
