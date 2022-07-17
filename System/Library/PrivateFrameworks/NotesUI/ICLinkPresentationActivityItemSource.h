//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NotesUI/UIActivityItemLinkPresentationSource-Protocol.h>

@class LPFileMetadata, LPLinkMetadata, NSString;

@interface ICLinkPresentationActivityItemSource : NSObject <UIActivityItemLinkPresentationSource>
{
    LPFileMetadata *_fileMetadata;	// 8 = 0x8
    LPLinkMetadata *_linkMetadata;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000022d60
@property(retain, nonatomic) LPLinkMetadata *linkMetadata; // @synthesize linkMetadata=_linkMetadata;
@property(retain, nonatomic) LPFileMetadata *fileMetadata; // @synthesize fileMetadata=_fileMetadata;
- (id)detail;	// IMP=0x0000000000022d22
- (id)title;	// IMP=0x0000000000022d1a
- (void)setIconImage:(id)arg1;	// IMP=0x0000000000022aed
- (id)iconImage;	// IMP=0x0000000000022ae5
- (id)activityViewControllerLinkPresentationMetadata:(id)arg1;	// IMP=0x00000000000226e8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
