//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsCore/FCOperation.h>

@class FCArticle, NUPageStyle;

@interface NUArticlePageStyleOperation : FCOperation
{
    FCArticle *_article;	// 8 = 0x8
    unsigned long long _pageNextAction;	// 16 = 0x10
    CDUnknownBlockType _completion;	// 24 = 0x18
    NUPageStyle *_pageStyle;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000494f2
@property(retain, nonatomic) NUPageStyle *pageStyle; // @synthesize pageStyle=_pageStyle;
@property(readonly, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) unsigned long long pageNextAction; // @synthesize pageNextAction=_pageNextAction;
@property(readonly, nonatomic) FCArticle *article; // @synthesize article=_article;
- (void)operationDidFinishWithError:(id)arg1;	// IMP=0x000000000004940e
- (void)performOperation;	// IMP=0x0000000000048f92
- (_Bool)validateOperation;	// IMP=0x0000000000048f5f
- (id)initWithArticle:(id)arg1 pageNextAction:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000048e9f

@end

