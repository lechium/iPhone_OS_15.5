//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIActivity.h>

@protocol ContentRepresentationHandlingDelegate;

@interface MessageMarkupDocumentActivity : UIActivity
{
    id <ContentRepresentationHandlingDelegate> _delegate;	// 8 = 0x8
    long long _context;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000005696
@property(nonatomic) long long context; // @synthesize context=_context;
@property(nonatomic) __weak id <ContentRepresentationHandlingDelegate> delegate; // @synthesize delegate=_delegate;
- (void)performActivity;	// IMP=0x0000000000005630
- (_Bool)canPerformWithActivityItems:(id)arg1;	// IMP=0x0000000000005628
- (id)activityImage;	// IMP=0x0000000000005605
- (id)activityTitle;	// IMP=0x0000000000005585
- (id)activityType;	// IMP=0x0000000000005578
- (id)initWithAttachmentHandlingDelegate:(id)arg1 context:(long long)arg2;	// IMP=0x00000000000054cb

@end

