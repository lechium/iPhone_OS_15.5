//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "RAPCommentQuestionProtocol-Protocol.h"

@class NSArray;
@protocol RAPLocalizedNameProtocol;

@protocol RAPChoiceCommentProtocol <RAPCommentQuestionProtocol>
@property(readonly, nonatomic) NSArray *choices;
- (void)setSelectedChoice:(id <RAPLocalizedNameProtocol>)arg1;
@end

