//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsSupport/NSObject-Protocol.h>

@class GEOStyleAttributes;

@protocol GEOTransitIconDataSource <NSObject>
@property(readonly, nonatomic) int iconType;

@optional
@property(readonly, nonatomic) GEOStyleAttributes *styleAttributes;
@property(readonly, nonatomic) unsigned int iconAttributeValue;
@property(readonly, nonatomic) unsigned int iconAttributeKey;
@property(readonly, nonatomic) unsigned int defaultTransitType;
@property(readonly, nonatomic) unsigned int cartoID;
@end

