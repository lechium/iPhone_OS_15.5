//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "RAPCommentQuestionProtocol-Protocol.h"
#import "RAPInstrumentableTarget-Protocol.h"

@class RAPPlaceCorrectableString;

@protocol RAPAccessPointQuestion <RAPCommentQuestionProtocol, RAPInstrumentableTarget>
@property(nonatomic) struct CLLocationCoordinate2D selectedCoordinate;
@property(readonly, nonatomic) _Bool showPin;
@property(readonly, nonatomic) unsigned long long mapType;
@property(readonly, nonatomic) struct CLLocationCoordinate2D originalCoordinate;
@property(readonly, nonatomic) CDStruct_02837cd9 visibleMapRect;

@optional
@property(retain, nonatomic) RAPPlaceCorrectableString *accessPointName;
@end

