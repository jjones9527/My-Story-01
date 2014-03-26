//
//  myPos.h
//  My Story 01
//
//  Created by Jeremy Jones on 2014-03-24.
//  Copyright (c) 2014 Jeremy Jones. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MapKit/MKAnnotation.h>

@interface myPos : NSObject
{
    CLLocationCoordinate2D coordinate;
    NSString *title;
    NSString *subtitle;
}

@property (nonatomic, assign) CLLocationCoordinate2D coordinate;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *subtitle;

@end
