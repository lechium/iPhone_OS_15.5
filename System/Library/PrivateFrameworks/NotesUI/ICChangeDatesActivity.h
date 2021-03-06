//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIActivity.h>

@interface ICChangeDatesActivity : UIActivity
{
    unsigned char _type;	// 8 = 0x8
    id _representedObject;	// 16 = 0x10
}

+ (long long)activityCategory;	// IMP=0x00000000000e5e32
- (void).cxx_destruct;	// IMP=0x00000000000e5e80
@property(nonatomic) unsigned char type; // @synthesize type=_type;
@property(retain, nonatomic) id representedObject; // @synthesize representedObject=_representedObject;
- (_Bool)canPerformWithActivityItems:(id)arg1;	// IMP=0x00000000000e5e2a
- (id)activityTitle;	// IMP=0x00000000000e5e1d
- (id)activityType;	// IMP=0x00000000000e5e10
- (void)setCreationDateForAttachmentObject:(id)arg1;	// IMP=0x00000000000e5ce2
- (void)setModificationDateForAttachmentObject:(id)arg1;	// IMP=0x00000000000e5bb4
- (void)setCreationDateForNoteObject:(id)arg1;	// IMP=0x00000000000e59a9
- (void)setModificationDateForNoteObject:(id)arg1;	// IMP=0x00000000000e579e
- (id)activityViewController;	// IMP=0x00000000000e5467
- (id)initWithObject:(id)arg1 activityType:(unsigned char)arg2;	// IMP=0x00000000000e53df

@end

