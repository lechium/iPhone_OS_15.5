//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableData, NSString, NSURL;

@interface ICPDFGenerator : NSObject
{
    struct CGContext *_pdfContext;	// 8 = 0x8
    NSURL *_fileURL;	// 16 = 0x10
    NSString *_title;	// 24 = 0x18
    NSMutableData *_data;	// 32 = 0x20
    struct CGRect _pageRect;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000006dd67
@property(retain, nonatomic) NSMutableData *data; // @synthesize data=_data;
@property(nonatomic) struct CGRect pageRect; // @synthesize pageRect=_pageRect;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
- (void)finishGenerating;	// IMP=0x000000000006dc81
- (void)addPageWithPageRect:(struct CGRect)arg1 renderBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000006db79
- (void)addPageWithRenderBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000006db05
- (_Bool)startGenerating;	// IMP=0x000000000006d839
@property(readonly, nonatomic) NSURL *url;
- (void)dealloc;	// IMP=0x000000000006d786
- (id)initWithMutableData:(id)arg1 pageRect:(struct CGRect)arg2 title:(id)arg3;	// IMP=0x000000000006d672
- (id)initWithURL:(id)arg1 pageRect:(struct CGRect)arg2 title:(id)arg3;	// IMP=0x000000000006d55e
- (id)init;	// IMP=0x000000000006d550

@end
