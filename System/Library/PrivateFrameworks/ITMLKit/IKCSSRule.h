//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ITMLKit/NSCopying-Protocol.h>

@class IKCSSDeclarationList, IKCSSMediaQuery, IKCSSSelectorList;

@interface IKCSSRule : NSObject <NSCopying>
{
    IKCSSSelectorList *_selectorList;	// 8 = 0x8
    IKCSSDeclarationList *_declarationList;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000045059
@property(retain, nonatomic) IKCSSDeclarationList *declarationList; // @synthesize declarationList=_declarationList;
@property(retain, nonatomic) IKCSSSelectorList *selectorList; // @synthesize selectorList=_selectorList;
- (id)description;	// IMP=0x0000000000044ee4
@property(readonly, nonatomic) IKCSSMediaQuery *mediaQuery;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000044df0

@end

