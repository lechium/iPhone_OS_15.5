//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Widgets/NSObject-Protocol.h>

@class WGWidgetDataSource, WGWidgetDatum;

@protocol WGWidgetDataSourceObserver <NSObject>
- (void)widgetDataSource:(WGWidgetDataSource *)arg1 removeDatum:(WGWidgetDatum *)arg2;
- (void)widgetDataSource:(WGWidgetDataSource *)arg1 replaceWithDatum:(WGWidgetDatum *)arg2;
@end

