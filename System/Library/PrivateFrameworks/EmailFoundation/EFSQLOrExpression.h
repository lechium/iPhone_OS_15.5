//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <EmailFoundation/EFSQLCompoundExpression-Protocol.h>

@class NSArray, NSString;

@interface EFSQLOrExpression : NSObject <EFSQLCompoundExpression>
{
    NSArray *_expressions;	// 8 = 0x8
}

+ (id)combined:(id)arg1;	// IMP=0x0000000000039690
- (void).cxx_destruct;	// IMP=0x0000000000039847
@property(readonly, copy, nonatomic) NSArray *expressions; // @synthesize expressions=_expressions;
- (id)ef_SQLIsolatedExpression;	// IMP=0x0000000000039821
- (void)ef_renderSQLExpressionInto:(id)arg1;	// IMP=0x0000000000039803
@property(readonly, copy, nonatomic) NSString *ef_SQLExpression;
- (id)initWithExpressions:(id)arg1;	// IMP=0x000000000003971e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

