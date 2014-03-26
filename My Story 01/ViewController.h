//
//  ViewController.h
//  My Story 01
//
//  Created by Jeremy Jones on 2014-03-24.
//  Copyright (c) 2014 Jeremy Jones. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>

@interface ViewController : UIViewController
{
    MKMapView *mapView;
}

@property (nonatomic, retain) IBOutlet MKMapView *mapView;

@end
