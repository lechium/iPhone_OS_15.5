//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Silex/NSObject-Protocol.h>

@protocol SXConditionHints, SXConditionalHints;

@protocol SXHints <NSObject>
@property(readonly, nonatomic) id <SXConditionalHints> conditionals;
@property(readonly, nonatomic) id <SXConditionHints> conditions;
@end

