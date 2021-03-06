//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNPropertyGroupItem, NSArray;
@protocol CNPropertyActionDelegate;

__attribute__((visibility("hidden")))
@interface CNPropertyAction
{
    NSArray *_propertyItems;	// 8 = 0x8
}

+ (void)performDefaultActionForItem:(id)arg1 sender:(id)arg2;	// IMP=0x00000000000f3e9e
- (void).cxx_destruct;	// IMP=0x00000000000f3dd4
@property(copy, nonatomic) NSArray *propertyItems; // @synthesize propertyItems=_propertyItems;
- (void)presentDisambiguationAlertWithSender:(id)arg1;	// IMP=0x00000000000f39d6
- (void)performActionWithSender:(id)arg1;	// IMP=0x00000000000f38e9
- (void)performActionForItem:(id)arg1 sender:(id)arg2;	// IMP=0x00000000000f3886
- (_Bool)canPerformAction;	// IMP=0x00000000000f387e
@property(readonly, nonatomic) CNPropertyGroupItem *propertyItem;
- (id)initWithContact:(id)arg1 propertyItem:(id)arg2;	// IMP=0x00000000000f3762
- (id)initWithContact:(id)arg1 propertyItems:(id)arg2;	// IMP=0x00000000000f36de
- (id)initWithContact:(id)arg1;	// IMP=0x00000000000f36c5

// Remaining properties
@property(nonatomic) __weak id <CNPropertyActionDelegate> delegate; // @dynamic delegate;

@end

